"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 262."""

def spec_graphene_hardened_malloc_262() -> dict:
    return {"system": "GrapheneOS", "spec_id": 262, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_262():
    s = spec_graphene_hardened_malloc_262()
    assert s["spec_id"] == 262
