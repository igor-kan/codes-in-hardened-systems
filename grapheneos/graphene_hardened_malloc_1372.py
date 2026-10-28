"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1372."""

def spec_graphene_hardened_malloc_1372() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1372, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1372():
    s = spec_graphene_hardened_malloc_1372()
    assert s["spec_id"] == 1372
