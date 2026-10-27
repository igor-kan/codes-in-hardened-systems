"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1318."""

def spec_graphene_hardened_malloc_1318() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1318, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1318():
    s = spec_graphene_hardened_malloc_1318()
    assert s["spec_id"] == 1318
