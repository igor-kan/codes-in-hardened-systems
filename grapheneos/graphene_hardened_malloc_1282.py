"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1282."""

def spec_graphene_hardened_malloc_1282() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1282, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1282():
    s = spec_graphene_hardened_malloc_1282()
    assert s["spec_id"] == 1282
